from random import randint
while True:
	print (" chọn Kéo, Búa hoặc Giấy đi cu ")
	player = input ()
	computer = randint (0,2)
	if computer == 0:
		computer = "Búa"
	if computer == 1:
		computer = "Kéo"
	if computer == 2:
		computer = "Giấy"

	print ( "Tao chọn : "+ str(player))
	print ("-------------")
	print ( "Máy chọn : "+ str(computer))

	if player == computer:
		print ("Huề")
	else:
		if player == "Giấy":
			if computer == "Búa":
				print ("ĐỒ ĂN MAY")
			else:
				print ("ĐỒ NGU KKK")
				
		elif player == "Búa":
			if computer == "Kéo":
				print ("ĐỒ ĂN MAY")
			else:
				print ("ĐỒ NGU KKK")
				
		elif player == "Kéo":
			if computer == "Giấy":
				print ("ĐỒ ĂN MAY")
			else:
				print ("ĐỒ NGU KKK")
		else:
			print ("Nhập đúng yêu cầu hộ t cái đi cu")
	n=int(input("Nhập 1 để tiếp tục, nhập 2 để out "))
	if n == 2:
		break
		