#pragma once

#include <QWidget>
#include <qimage.h>
#include <qpainter.h>
#include <QMouseEvent>
#include <QPoint>
#include <qpainterpath.h>
#include <vector>
#include <Windows.h>

#include "State.h"


class ToolMain;
class ToolSub;
class CutMask;
class CanvasWidget : public QWidget
{
	Q_OBJECT
public:
	CanvasWidget(QWidget *parent = nullptr);
	~CanvasWidget();
	static void Init();
	static CanvasWidget* Get();
public:
	State state{ State::start };
	ToolMain* toolMain;
	ToolSub* toolSub;
	CutMask* cutMask;
protected:
	void paintEvent(QPaintEvent* event) override;
private:
	void initImgs();
private:
	qreal maskStroke{ 1.5 };
	bool dragging = false;
	QPoint dragPosition;

	std::unique_ptr<QImage> imgBg;
	
};
