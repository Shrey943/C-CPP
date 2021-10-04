import sys
import glob

from PyQt5.QtWidgets import QApplication, QFileDialog, QMainWindow, QWidget
from PyQt5 import uic

class AppDemo(QMainWindow):
    def __init__(self):
        super().__init__()
        uic.loadUi('MCDC.ui', self)
        
        self.plus.clicked.connect(self.openFolder)

    def openFolder(self):
        file = str(QFileDialog.getExistingDirectory(self, "Select Directory"))
        excelFiles = glob.glob(file+"/*.xlsx")
        print(excelFiles)

if __name__ == '__main__':
    # app= QApplication(sys.argv)
    app = QApplication(sys.argv)
    
    demo = AppDemo()
    demo.show()
    
    try:
        sys.exit(app.exec_()) 
    except SystemExit:
        print('Closing window........')
