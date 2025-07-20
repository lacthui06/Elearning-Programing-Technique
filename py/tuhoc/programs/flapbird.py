import pygame, sys, random
# Func of game
def draw_floor():
    screen.blit(floor,(floor_x_pos,650))
    screen.blit(floor,(floor_x_pos+432,650))
def create_pipe():
    rand_pipe_pos = random.choice(pipe_heigh)
    bottom_pipe = pipe_surface.get_rect(midtop = (500, rand_pipe_pos))
    top_pipe = pipe_surface.get_rect(midtop = (500, rand_pipe_pos - 800 ))
    return bottom_pipe, top_pipe
def move_pipe(pipes):
    for pipe in pipes:
        pipe.centerx -= 5
    return pipes
def draw_pipe(pipes):
    for pipe in pipes:
        if pipe.bottom >= 650 :
            screen.blit(pipe_surface, pipe)
        else :
            flip_pipe = pygame.transform.flip(pipe_surface, False, True)
            screen.blit(flip_pipe, pipe)
def check_collision(pipes):
    for pipe in pipes :
        if bird_rect.colliderect(pipe):
            hit_sound.play()
            return False
    if bird_rect.top <= -75 or bird_rect.top >= 650:
        return False
    return True
def rotate_bird(bird1):
    new_bird = pygame.transform.rotozoom(bird1, - bird_movement *2, 1)
    return new_bird
def bird_animation ():
    new_bird = bird_list [bird_index]
    new_bird_rect = new_bird.get_rect(center = (100, bird_rect.centery))
    return new_bird, new_bird_rect
def score_display(game_state):
    if game_state == 'main game':
        score_surface = game_font.render( str( int( score )), True, (255, 255, 255))
        score_rect = score_surface.get_rect( center = ( 216, 100))
        screen.blit (score_surface, score_rect)
    if game_state == 'over_game':
        score_surface = game_font.render(f'Score : {int(score)}', True, (255, 255, 255))
        score_rect = score_surface.get_rect( center = ( 216, 100))
        screen.blit (score_surface, score_rect)
    
        high_score_surface = game_font.render(f'High Score : {int(high_score)}', True, (255, 255, 255))
        high_score_rect = score_surface.get_rect( center = (216, 630))
        screen.blit (high_score_surface, high_score_rect)
def update_score(score, high_score):
    if score > high_score:
        high_score = score
    return high_score

pygame.mixer.pre_init(frequency=44100, size=-16, channels=2, buffer=512)
pygame.init()
screen = pygame.display.set_mode((432,700))
clock = pygame.time.Clock()
game_font = pygame.font.Font('04B_19.TTF', 40)

# Bien game
gravity = 0.2 
bird_movement = 0
game_active = True
score = 0
high_score = 0

bg = pygame.image.load('assets/background-night.png').convert()
bg = pygame.transform.scale2x(bg)

floor = pygame.image.load('assets/floor.png').convert()
floor =  pygame.transform.scale2x(floor)
floor_x_pos = 0

bird_down = pygame.image.load('assets/yellowbird-downflap.png ').convert_alpha()
bird_mid = pygame.image.load('assets/yellowbird-midflap.png').convert_alpha()
bird_up = pygame.image.load('assets/yellowbird-upflap.png').convert_alpha()
bird_list = [bird_down, bird_mid, bird_up]
bird_index = 0
bird = bird_list[bird_index]
# bird =  pygame.transform.scale2x(bird)
bird_rect = bird.get_rect(center = (100,384))

birdflap = pygame.USEREVENT + 1
pygame.time.set_timer(birdflap, 200)
 
pipe_surface = pygame.image.load('assets/pipe-green.png').convert()
pipe_surface =  pygame.transform.scale2x(pipe_surface)
pipe_list = []

game_over_surface = pygame.transform.scale2x(pygame.image.load('assets/message.png').convert_alpha())
game_over_rect = game_over_surface.get_rect(center = (216, 384))
# Create time
spawn_pipe = pygame.USEREVENT
pygame.time.set_timer(spawn_pipe, 1200)
pipe_heigh = [200, 400, 500]

flap_sound = pygame.mixer.Sound('sound/sfx_wing.wav')
hit_sound = pygame.mixer.Sound('sound/sfx_hit.wav')
score_sound = pygame.mixer.Sound('sound/sfx_point.wav')
score_countdown = 100

while True:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            pygame.quit()
            sys.exit()
        if event.type == pygame.KEYDOWN:
            if event.key == pygame.K_SPACE:
                bird_movement = 0
                bird_movement -= 8
                flap_sound.play()
            if event.type == pygame.KEYDOWN and game_active == False:
                game_active = True
                pipe_list.clear()
                bird_rect.center = (100, 384)
                bird_movement = 0
                score = 0  
        if event.type == spawn_pipe:
                pipe_list.extend(create_pipe())
        if event.type == birdflap:
            if bird_index < 2:
                bird_index += 1
            else:
                bird_index = 0
                bird, bird_rect = bird_animation()
 
    screen.blit(bg,(0,0))

    if game_active:
    # Bird 
        bird_movement += gravity
        rotated_bird = rotate_bird(bird)
        bird_rect.centery += bird_movement 
        screen.blit(rotated_bird, bird_rect)
        game_active = check_collision(pipe_list)
    # Pipe
        pipe_list = move_pipe(pipe_list)
        draw_pipe(pipe_list)

        score += 0.01
        score_display('main game')
        score_countdown -= 1
        if score_countdown <= 0:
            score_sound.play()
            score_countdown = 100
    else :
        screen.blit(game_over_surface, game_over_rect)
        high_score = update_score(score, high_score)
        score_display('over_game')

# Floor
    floor_x_pos -= 1
    draw_floor()


    if floor_x_pos <= -432 :
        floor_x_pos = 0

    pygame.display.update()
    clock.tick(120)