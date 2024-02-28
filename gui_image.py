import sys
from PyQt5.QtGui import QPixmap
from PyQt5.QtWidgets import QApplication, QLabel, QMainWindow, QHBoxLayout, QWidget


class GuiImage(QWidget):
    def __init__(self):
        super().__init__()

        labelTexto = QLabel("Olá, Imagem!")
        labelImagem = QLabel("")
        labelImagem.setPixmap(QPixmap("cat.png"))
        

        layout = QHBoxLayout()
        layout.addWidget(labelTexto)
        layout.addWidget(labelImagem)


        self.setGeometry(100,100,500,600)
        
        self.setWindowTitle("Imagem em label")

        self.setLayout(layout)


app = QApplication(sys.argv)
tela = GuiImage()
tela.show()
app.exec_()

