import sys, time
from PyQt6 import QtCore, QtGui, QtWidgets
from PyQt6.QtGui import QFont
from PyQt6.QtCore import QRect, Qt, QTimer
from PyQt6.QtWidgets import (
    QMainWindow, QApplication,
    QWidget, QLabel,
    QHBoxLayout, QVBoxLayout
)
from digits import DIGIT
from datetime import datetime

clock = [1, 2, 10, 3, 9, 10, 5, 8]
t_pos = [0, 1, 3, 4, 6, 7]
color = ['red', 'red', 'grey', 'green', 'green', 'grey', 'yellow', 'yellow']
colons = [2, 5]

class MainWindow(QWidget):
    def __init__(self):
        super().__init__()

        self.setWindowTitle("Qt6 Digital Clock")
        self.setObjectName("MainWindow")
        self.resize(900, 300)
        self.vlayout = QVBoxLayout()

        self.layout = QHBoxLayout()
        serifFont = QFont("Times", 20)
        label = QLabel("My Qt6 Python Digital Clock")
        label.setFont(serifFont)
        label.setAlignment(Qt.AlignmentFlag.AlignCenter)
        self.layout.addWidget(label)
        self.vlayout.addLayout(self.layout)

        # Create a QFont object and set it to a fixed-width font
        self.font = QFont("Courier")
        self.font.setStyleHint(QFont.StyleHint.TypeWriter)
        self.initUI()

        self.layout = QHBoxLayout()
        serifFont = QFont("Times", 20)

        label = QLabel("Currnet Time")
        self.timeLabel = label
        label.setFont(serifFont)
        label.setAlignment(Qt.AlignmentFlag.AlignCenter)
        self.layout.addWidget(label)
        self.vlayout.addLayout(self.layout)
        self.time_timer = QTimer(self)
        self.time_timer.timeout.connect(self.UpdateTime)
        self.time_timer.start(1100)  # 1100 milliseconds = 1.1 seconds


        self.visible = True
        # Set up the timer to toggle colons every 2 seconds
        self.timer = QTimer(self)
        self.timer.timeout.connect(self.toggle)
        self.timer.start(2000)  # 2000 milliseconds = 2 seconds

    def initUI(self):
        self.layout = QHBoxLayout()
        self.layout.setObjectName("layout")
        #self.layout.setGeometry(QRect(10, 10, 900, 200))
        self.digit_pos = []
        for i in range(0,8):
            label = QLabel()
            label.setObjectName(f"Label{i}")
            x = clock[i]
            digit = "\n".join(DIGIT[x])
            label.setText(digit)
            # center justify the text and set font to courier
            label.setFont(self.font)
            label.setAlignment(Qt.AlignmentFlag.AlignLeft)

            # Change the color to blue
            c = color[i]
            label.setStyleSheet(f"color: {c};")
            #label.setFixedWidth(100)
            self.layout.addWidget(label)
            self.digit_pos.append(label)
        self.vlayout.addLayout(self.layout)
        self.setLayout(self.vlayout)

    def toggle(self):
        #print(self.visible)
        if self.visible:
            d = "\n".join(DIGIT[10])
            for i in range(len(colons)):
                x = colons[i]
                self.digit_pos[x].setText(f"{d}")
                self.digit_pos[x].setStyleSheet(f"color: white;")
        else:
            for i in range(len(colons)):
                x = colons[i]
                self.digit_pos[x].clear()
        self.visible = not self.visible

    def UpdateTime(self):
        now = datetime.now().strftime(f"%A %B,%0d %Y %H:%M:%S")
        Time_now = datetime.now().strftime("%H%M%S")
        #t_pos = [6, 7]
        for i in range(len(Time_now)):
            s = int(Time_now[i])
            p = t_pos[i]
            self.digit_pos[p].clear()
            d = "\n".join(DIGIT[s])
            self.digit_pos[p].setText(f"{d}")
        self.timeLabel.setText(f"{now}")

# Program Code Starts Below
if __name__ == "__main__":

    # Main execution
    app = QApplication([])
    window = MainWindow()
    window.show()


    now = datetime.now().strftime(f"%Y-%m-%d %H:%M:%S")
    print(now)
    sys.exit(app.exec())
