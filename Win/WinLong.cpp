#include <Windows.h>
#include "WinLong.h"

WinLong::WinLong(QWidget *parent) : WinBase(parent)
{

	//UINT scrollLines;
	//SystemParametersInfo(SPI_GETWHEELSCROLLLINES, 0, &scrollLines, 0);
	//int lines = delta * scrollLines / WHEEL_DELTA; // �����������


	//SCROLLINFO si = { sizeof(SCROLLINFO) };
	//si.fMask = SIF_POS;
	//GetScrollInfo(hWnd, SB_VERT, &si);
	//int oldPos = si.nPos; // ��¼����ǰλ��

	//SetScrollInfo(hWnd, SB_VERT, &si, TRUE); // ���¹���λ��
	//GetScrollInfo(hWnd, SB_VERT, &si); // ��ȡ��λ��
	//int scrollDistance = si.nPos - oldPos; // ����������루��λ��


	//HDC hdc = GetDC(hWnd);
	//TEXTMETRIC tm;
	//GetTextMetrics(hdc, &tm);
	//int lineHeight = tm.tmHeight; // ÿ�и߶ȣ����أ�
	//ReleaseDC(hWnd, hdc);
}

WinLong::~WinLong()
{

}

void WinLong::paintEvent(QPaintEvent* event)
{
}

void WinLong::mousePressEvent(QMouseEvent* event)
{
}

void WinLong::mouseMoveEvent(QMouseEvent* event)
{
}

void WinLong::mouseReleaseEvent(QMouseEvent* event)
{
}

void WinLong::closeEvent(QCloseEvent* event)
{
}

QImage WinLong::getTargetImg()
{
	return QImage();
}

void WinLong::initWindow()
{
}
