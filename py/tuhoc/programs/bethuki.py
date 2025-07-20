import speech_recognition
import pyttsx3
from datetime import date

robot_ear = speech_recognition.Recognizer()
robot_mouth = pyttsx3.init()

while True:
	with speech_recognition.Microphone() as mic:
		print ("Robot: I'm listening")
		audio = robot_ear.listen(mic)

		print ("Robot : ...")
	try:
		you = robot_ear.recognize_google(audio)
	except:
		you = ""
		
	print("You : " + you)

	if you =="":
		robot_brain = "tôi không nghe bạn"
	elif "hello" in you :
		robot_brain = "hello bạn nha "
	elif "today" in you :
		today = date.today()
		robot_brain = today.strftime("%d/%m/%Y")
	elif "bye" in you:
		robot_brain = "bye bạn nha  "
		print ("Robot : " + robot_brain)
		robot_mouth.say(robot_brain)
		robot_mouth.runAndWait()
		break
	else :
		robot_brain ="thanks for your conservation "

	print ("Robot : " + robot_brain)

	robot_mouth.say(robot_brain)
	robot_mouth.runAndWait()
	