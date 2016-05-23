#include <vector>
#include <memory>

using namespace std;

// Холст, позволяющий рисовать графические примитивы
class ICanvas
{
public:
	virtual void DrawLine(int x0, int y0, int x1, int y1) = 0;
	virtual ~ICanvas() {}
};

// Реализация холста, выполняющая вывод информации о рисуемых примитивах в stdout в виде:
// DrawLine:(<x0>, <y0>) - (<x1>, <y1>)
class CCanvas : public ICanvas
{
	// Написать недостающий код
};

// Интерфейс объектов, которые можно нарисовать на холсте
class ICanvasDrawable
{
	// Написать недостающий код
};

// Прямоугольник, обладающий координатами верхнего левого угла, шириной и высотой
class CRectangle : public ICanvasDrawable
{
	// Написать недостающий код
};

// Треугольник, задается координатами трех вершин
class CTriangle : public ICanvasDrawable
{
	// Написать недостающий код
};

// Рисует картину picture на холсте canvas
void DrawPicture(ICanvas & canvas, const vector<shared_ptr<const ICanvasDrawable>> & picture)
{
	// Написать недостающий код
}

int main()
{
	/*
	Задание:
		При помощи имеющихся фигур описать домик
		"Нарисовать" его при помощи функции DrawPicture на "холсте"
	   /\
	  /  \
	 /    \
	--------
	 |    |
	 |    |
	 |    |
	 ------
	*/
	return 0;
}
