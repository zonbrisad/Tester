from PyQt5 import QtWidgets


class Window(QtWidgets.QWidget):
    def __init__(self, val):
        super().__init__()
        mygroupbox = QtWidgets.QWidget()
        myform = QtWidgets.QFormLayout()
        labellist = []
        combolist = []
        for i in range(val):
            labellist.append(QtWidgets.QLabel('mylabel'))
            combolist.append(QtWidgets.QComboBox())
            myform.addRow(labellist[i], combolist[i])
        mygroupbox.setLayout(myform)

        scroll = QtWidgets.QScrollArea()
        scroll.setWidget(mygroupbox)
        scroll.setWidgetResizable(True)
        scroll.setFixedHeight(200)
        layout = QtWidgets.QVBoxLayout(self)
        layout.addWidget(scroll)


if __name__ == '__main__':

    app = QtWidgets.QApplication(['Test'])
    window = Window(12)
    window.setGeometry(500, 300, 300, 200)
    window.show()
    app.exec_()
