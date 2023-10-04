import pyautogui

num = int(input())
for i in range(1, num + 1):
    for j in range(i):
        pyautogui.write("#")
        
    pyautogui.write("\num")