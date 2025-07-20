import random
from math import sin, cos, pi, log
from tkinter import *

CANVAS_WIDTH = 1280
CANVAS_HEIGHT = 960
CANVAS_CENTER_X = CANVAS_WIDTH / 2
CANVAS_CENTER_Y = CANVAS_HEIGHT / 3
IMAGE_ENLARGE = 11.8
HEART_COLOR = "#FF5A82"

class Particle:
    def __init__(self, x, y):
        self.x = x
        self.y = y
        self.size = random.uniform(2, 4)
        self.alpha = 1.0
        self.speed_x = random.uniform(-3, 3)
        self.speed_y = random.uniform(-3, 3)
        self.shrink = random.uniform(0.96, 0.99)
        self.fade = random.uniform(0.01, 0.03)

    def update(self):
        self.x += self.speed_x
        self.y += self.speed_y
        self.size *= self.shrink
        self.alpha -= self.fade

    def is_dead(self):
        return self.alpha <= 0 or self.size <= 0

    def render(self, canvas):
        if self.alpha > 0:
            canvas.create_oval(self.x, self.y, self.x + self.size, self.y + self.size, fill=HEART_COLOR, outline="")

def heart_function(t, shrink_ratio: float = IMAGE_ENLARGE):
    x = 16 * (sin(t) ** 3)
    y = 13 * cos(t) - 5 * cos(2 * t) - 2 * cos(3 * t) - cos(4 * t)
    x *= shrink_ratio
    y *= shrink_ratio
    x += CANVAS_CENTER_X
    y = CANVAS_CENTER_Y - y
    return int(x), int(y)

class Heart:
    def __init__(self, generate_frame=60):
        self.particles = []
        self.points = []
        self.build_points(4000)
        self.generate_frame = generate_frame

    def build_points(self, number):
        self.points = []
        for _ in range(number):
            t = random.uniform(0, 2 * pi)
            x, y = heart_function(t)
            self.points.append((x, y))

    def add_particles(self, scale_factor):
        for _ in range(8):  # Tăng số hạt phát ra mỗi khung hình
            x, y = random.choice(self.points)
            x = CANVAS_CENTER_X + (x - CANVAS_CENTER_X) * scale_factor
            y = CANVAS_CENTER_Y + (y - CANVAS_CENTER_Y) * scale_factor
            self.particles.append(Particle(x, y))

    def update(self, scale_factor):
        self.add_particles(scale_factor)
        for particle in self.particles:
            particle.update()
        self.particles = [p for p in self.particles if not p.is_dead()]

    def render(self, canvas, scale_factor):
        # Vẽ trái tim chính (nhịp đập co giãn)
        for (x, y) in self.points:
            x = CANVAS_CENTER_X + (x - CANVAS_CENTER_X) * scale_factor
            y = CANVAS_CENTER_Y + (y - CANVAS_CENTER_Y) * scale_factor
            canvas.create_oval(x, y, x + 2, y + 2, fill=HEART_COLOR, outline="")
        
        # Vẽ các hạt sáng phát ra
        for particle in self.particles:
            particle.render(canvas)

def animate(root, canvas, heart, frame_count=0):
    canvas.delete('all')

    scale_factor = 1 + 0.2 * sin(frame_count / 10)  # Tạo nhịp đập co giãn nhịp nhàng
    heart.update(scale_factor)
    heart.render(canvas, scale_factor)

    root.after(30, animate, root, canvas, heart, frame_count + 1)

if __name__ == "__main__":
    root = Tk()
    root.title("Heart Beat Animation")
    canvas = Canvas(root, bg='black', height=CANVAS_HEIGHT, width=CANVAS_WIDTH)
    canvas.pack()

    heart = Heart()
    animate(root, canvas, heart)

    root.mainloop()
