# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file '../Designer/tool.ui'
#
# Created by: PyQt5 UI code generator 5.9.2
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(828, 776)
        MainWindow.setAutoFillBackground(True)
        MainWindow.setStyleSheet("")
        self.centralwidget = QtWidgets.QWidget(MainWindow)
        self.centralwidget.setObjectName("centralwidget")
        self.WidMsgTree = QtWidgets.QTreeWidget(self.centralwidget)
        self.WidMsgTree.setGeometry(QtCore.QRect(10, 10, 491, 711))
        font = QtGui.QFont()
        font.setFamily("Arial")
        font.setPointSize(11)
        font.setBold(True)
        font.setWeight(75)
        self.WidMsgTree.setFont(font)
        self.WidMsgTree.setVerticalScrollBarPolicy(QtCore.Qt.ScrollBarAsNeeded)
        self.WidMsgTree.setHorizontalScrollBarPolicy(QtCore.Qt.ScrollBarAlwaysOff)
        self.WidMsgTree.setAutoScroll(False)
        self.WidMsgTree.setAutoExpandDelay(-1)
        self.WidMsgTree.setIndentation(10)
        self.WidMsgTree.setColumnCount(4)
        self.WidMsgTree.setObjectName("WidMsgTree")
        self.WidMsgTree.headerItem().setText(0, "1")
        self.WidMsgTree.headerItem().setText(1, "2")
        self.WidMsgTree.headerItem().setText(2, "3")
        self.WidMsgTree.headerItem().setText(3, "4")
        self.WidMsgTree.header().setDefaultSectionSize(280)
        self.FrameMsg = QtWidgets.QFrame(self.centralwidget)
        self.FrameMsg.setGeometry(QtCore.QRect(620, 30, 191, 141))
        self.FrameMsg.setAutoFillBackground(True)
        self.FrameMsg.setStyleSheet("")
        self.FrameMsg.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.FrameMsg.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.FrameMsg.setLineWidth(2)
        self.FrameMsg.setMidLineWidth(2)
        self.FrameMsg.setObjectName("FrameMsg")
        self.BtnReq = QtWidgets.QRadioButton(self.FrameMsg)
        self.BtnReq.setGeometry(QtCore.QRect(10, 0, 81, 41))
        self.BtnReq.setObjectName("BtnReq")
        self.BtnNotify = QtWidgets.QRadioButton(self.FrameMsg)
        self.BtnNotify.setGeometry(QtCore.QRect(110, 10, 89, 21))
        self.BtnNotify.setObjectName("BtnNotify")
        self.label_5 = QtWidgets.QLabel(self.FrameMsg)
        self.label_5.setGeometry(QtCore.QRect(10, 50, 81, 31))
        self.label_5.setObjectName("label_5")
        self.label_10 = QtWidgets.QLabel(self.FrameMsg)
        self.label_10.setGeometry(QtCore.QRect(10, 90, 61, 31))
        self.label_10.setObjectName("label_10")
        self.LetMsgCmt = QtWidgets.QLineEdit(self.FrameMsg)
        self.LetMsgCmt.setGeometry(QtCore.QRect(70, 90, 111, 31))
        self.LetMsgCmt.setObjectName("LetMsgCmt")
        self.LetMsgName = QtWidgets.QLineEdit(self.FrameMsg)
        self.LetMsgName.setGeometry(QtCore.QRect(70, 50, 111, 31))
        self.LetMsgName.setObjectName("LetMsgName")
        self.BtnDel = QtWidgets.QPushButton(self.centralwidget)
        self.BtnDel.setGeometry(QtCore.QRect(520, 190, 81, 41))
        self.BtnDel.setObjectName("BtnDel")
        self.BtnUpdate = QtWidgets.QPushButton(self.centralwidget)
        self.BtnUpdate.setGeometry(QtCore.QRect(520, 290, 81, 41))
        self.BtnUpdate.setObjectName("BtnUpdate")
        self.BtnSave = QtWidgets.QPushButton(self.centralwidget)
        self.BtnSave.setGeometry(QtCore.QRect(520, 390, 81, 41))
        self.BtnSave.setObjectName("BtnSave")
        self.BbvInfo = QtWidgets.QTableView(self.centralwidget)
        self.BbvInfo.setGeometry(QtCore.QRect(520, 510, 301, 211))
        self.BbvInfo.setObjectName("BbvInfo")
        self.FrameField = QtWidgets.QFrame(self.centralwidget)
        self.FrameField.setGeometry(QtCore.QRect(620, 190, 191, 291))
        self.FrameField.setAutoFillBackground(True)
        self.FrameField.setStyleSheet("")
        self.FrameField.setFrameShape(QtWidgets.QFrame.StyledPanel)
        self.FrameField.setFrameShadow(QtWidgets.QFrame.Sunken)
        self.FrameField.setLineWidth(2)
        self.FrameField.setMidLineWidth(2)
        self.FrameField.setObjectName("FrameField")
        self.CbxValueType = QtWidgets.QComboBox(self.FrameField)
        self.CbxValueType.setGeometry(QtCore.QRect(10, 120, 171, 31))
        self.CbxValueType.setObjectName("CbxValueType")
        self.label = QtWidgets.QLabel(self.FrameField)
        self.label.setGeometry(QtCore.QRect(10, 10, 91, 31))
        self.label.setObjectName("label")
        self.label_3 = QtWidgets.QLabel(self.FrameField)
        self.label_3.setGeometry(QtCore.QRect(10, 170, 81, 16))
        self.label_3.setObjectName("label_3")
        self.label_2 = QtWidgets.QLabel(self.FrameField)
        self.label_2.setGeometry(QtCore.QRect(10, 90, 51, 21))
        self.label_2.setObjectName("label_2")
        self.LetFieldName = QtWidgets.QLineEdit(self.FrameField)
        self.LetFieldName.setGeometry(QtCore.QRect(10, 190, 171, 31))
        self.LetFieldName.setObjectName("LetFieldName")
        self.CbxProtoType = QtWidgets.QComboBox(self.FrameField)
        self.CbxProtoType.setGeometry(QtCore.QRect(10, 40, 171, 31))
        self.CbxProtoType.setObjectName("CbxProtoType")
        self.CbxProtoType.addItem("")
        self.CbxProtoType.addItem("")
        self.CbxProtoType.addItem("")
        self.LetFieldCmt = QtWidgets.QLineEdit(self.FrameField)
        self.LetFieldCmt.setGeometry(QtCore.QRect(10, 250, 171, 31))
        self.LetFieldCmt.setObjectName("LetFieldCmt")
        self.label_4 = QtWidgets.QLabel(self.FrameField)
        self.label_4.setGeometry(QtCore.QRect(10, 230, 81, 16))
        self.label_4.setObjectName("label_4")
        self.CbxValueMod = QtWidgets.QComboBox(self.FrameField)
        self.CbxValueMod.setGeometry(QtCore.QRect(70, 80, 111, 31))
        self.CbxValueMod.setObjectName("CbxValueMod")
        self.BtnAdd = QtWidgets.QPushButton(self.centralwidget)
        self.BtnAdd.setGeometry(QtCore.QRect(520, 90, 81, 41))
        self.BtnAdd.setObjectName("BtnAdd")
        MainWindow.setCentralWidget(self.centralwidget)
        self.menubar = QtWidgets.QMenuBar(MainWindow)
        self.menubar.setGeometry(QtCore.QRect(0, 0, 828, 23))
        self.menubar.setObjectName("menubar")
        self.menuFile = QtWidgets.QMenu(self.menubar)
        self.menuFile.setObjectName("menuFile")
        self.menuTool = QtWidgets.QMenu(self.menubar)
        self.menuTool.setObjectName("menuTool")
        self.menuProto = QtWidgets.QMenu(self.menuTool)
        self.menuProto.setObjectName("menuProto")
        self.menuSet = QtWidgets.QMenu(self.menubar)
        self.menuSet.setObjectName("menuSet")
        MainWindow.setMenuBar(self.menubar)
        self.statusbar = QtWidgets.QStatusBar(MainWindow)
        self.statusbar.setObjectName("statusbar")
        MainWindow.setStatusBar(self.statusbar)
        self.actionopen = QtWidgets.QAction(MainWindow)
        self.actionopen.setObjectName("actionopen")
        self.menuOpen = QtWidgets.QAction(MainWindow)
        self.menuOpen.setObjectName("menuOpen")
        self.menuRecentOen = QtWidgets.QAction(MainWindow)
        self.menuRecentOen.setObjectName("menuRecentOen")
        self.menuSave = QtWidgets.QAction(MainWindow)
        self.menuSave.setObjectName("menuSave")
        self.menuClose = QtWidgets.QAction(MainWindow)
        self.menuClose.setObjectName("menuClose")
        self.menuSaveAs = QtWidgets.QAction(MainWindow)
        self.menuSaveAs.setObjectName("menuSaveAs")
        self.menuProtoServer = QtWidgets.QAction(MainWindow)
        self.menuProtoServer.setObjectName("menuProtoServer")
        self.menuProtoClient = QtWidgets.QAction(MainWindow)
        self.menuProtoClient.setObjectName("menuProtoClient")
        self.menuTableServer = QtWidgets.QAction(MainWindow)
        self.menuTableServer.setObjectName("menuTableServer")
        self.menuTableClient = QtWidgets.QAction(MainWindow)
        self.menuTableClient.setObjectName("menuTableClient")
        self.menuTable = QtWidgets.QAction(MainWindow)
        self.menuTable.setObjectName("menuTable")
        self.menuSetting = QtWidgets.QAction(MainWindow)
        self.menuSetting.setObjectName("menuSetting")
        self.menuFile.addAction(self.menuOpen)
        self.menuFile.addSeparator()
        self.menuFile.addAction(self.menuSave)
        self.menuFile.addAction(self.menuSaveAs)
        self.menuFile.addAction(self.menuClose)
        self.menuProto.addAction(self.menuProtoServer)
        self.menuProto.addSeparator()
        self.menuProto.addAction(self.menuProtoClient)
        self.menuTool.addAction(self.menuProto.menuAction())
        self.menuTool.addAction(self.menuTable)
        self.menuTool.addSeparator()
        self.menuSet.addAction(self.menuSetting)
        self.menubar.addAction(self.menuFile.menuAction())
        self.menubar.addAction(self.menuTool.menuAction())
        self.menubar.addAction(self.menuSet.menuAction())

        self.retranslateUi(MainWindow)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "自动化工具"))
        self.WidMsgTree.setSortingEnabled(False)
        self.BtnReq.setText(_translate("MainWindow", "请求消息"))
        self.BtnNotify.setText(_translate("MainWindow", "通知消息"))
        self.label_5.setText(_translate("MainWindow", "消息名称"))
        self.label_10.setText(_translate("MainWindow", "消息说明"))
        self.BtnDel.setText(_translate("MainWindow", "删除"))
        self.BtnUpdate.setText(_translate("MainWindow", "修改"))
        self.BtnSave.setText(_translate("MainWindow", "保存"))
        self.label.setText(_translate("MainWindow", "proto可选类型"))
        self.label_3.setText(_translate("MainWindow", "字段名称"))
        self.label_2.setText(_translate("MainWindow", "数据类型"))
        self.CbxProtoType.setItemText(0, _translate("MainWindow", "optional"))
        self.CbxProtoType.setItemText(1, _translate("MainWindow", "required"))
        self.CbxProtoType.setItemText(2, _translate("MainWindow", "repeated"))
        self.label_4.setText(_translate("MainWindow", "字段说明"))
        self.BtnAdd.setText(_translate("MainWindow", "增加"))
        self.menuFile.setTitle(_translate("MainWindow", "文件"))
        self.menuTool.setTitle(_translate("MainWindow", "工具"))
        self.menuProto.setTitle(_translate("MainWindow", "导出协议"))
        self.menuSet.setTitle(_translate("MainWindow", "设置"))
        self.actionopen.setText(_translate("MainWindow", "open"))
        self.menuOpen.setText(_translate("MainWindow", "打开"))
        self.menuOpen.setShortcut(_translate("MainWindow", "Ctrl+O"))
        self.menuRecentOen.setText(_translate("MainWindow", "最近打开"))
        self.menuRecentOen.setShortcut(_translate("MainWindow", "Ctrl+Shift+O"))
        self.menuSave.setText(_translate("MainWindow", "保存"))
        self.menuSave.setShortcut(_translate("MainWindow", "Ctrl+S"))
        self.menuClose.setText(_translate("MainWindow", "关闭"))
        self.menuSaveAs.setText(_translate("MainWindow", "另存为..."))
        self.menuSaveAs.setShortcut(_translate("MainWindow", "Ctrl+Shift+S"))
        self.menuProtoServer.setText(_translate("MainWindow", "服务器协议"))
        self.menuProtoServer.setShortcut(_translate("MainWindow", "Ctrl+P"))
        self.menuProtoClient.setText(_translate("MainWindow", "客户端协议"))
        self.menuProtoClient.setShortcut(_translate("MainWindow", "Ctrl+D"))
        self.menuTableServer.setText(_translate("MainWindow", "服务器"))
        self.menuTableServer.setShortcut(_translate("MainWindow", "Ctrl+Shift+P"))
        self.menuTableClient.setText(_translate("MainWindow", "客户端"))
        self.menuTableClient.setShortcut(_translate("MainWindow", "Ctrl+Shift+D"))
        self.menuTable.setText(_translate("MainWindow", "导出数据表"))
        self.menuSetting.setText(_translate("MainWindow", "设置选项"))

