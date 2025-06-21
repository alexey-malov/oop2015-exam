#include <iostream>
#include <vector>
#include <memory>

struct Point
{
	double x, y;
};

class ShapeStrategy
{
	// TODO: напишите недостающий код
};

class RectangleStrategy : public ShapeStrategy
{
public:
	RectangleStrategy(Point leftTop, Point rightBottom);
	void Resize(double width, double height);
};

class CircleStrategy : public ShapeStrategy
{
public:
	CircleStrategy(Point center, double radius);
	void SetRadius(double radius);
};

// Экземпляры Shape должны быть копируемыми
class Shape
{
public:
	Shape(std::unique_ptr<ShapeStrategy> strategy);
	void SetType(std::unique_ptr<ShapeStrategy> strategy);
	void Draw(std::ostream& out);
	// Возвращает указатель на const-стратегию, если она является StrategyType, иначе nullptr
	template <typename StrategyType> const StrategyType* As() const;
	// Возвращает указатель на стратегию, если она является StrategyType, иначе nullptr
	template <typename StrategyType> StrategyType* As();
};

int main()
{
	Shape rect{ std::make_unique<RectangleStrategy>(Point{10, 20}, Point{30, 40}) };
	if (auto rs = rect.As<RectangleStrategy>())
	{
		rs->Resize(20, 30); // Изменяем размер прямоугольника
	}

	Shape circle{ std::make_unique<CircleStrategy>(Point{ 10, 20 }, 40) };
	if (auto cs = circle.As<CircleStrategy>())
	{
		cs->SetRadius(50); // Изменяем радиус круга
	}

	Shape circle1 = circle; // Копируем круг
	// Превращаем окружность в прямоугольник
	circle1.SetType(std::make_unique<RectangleStrategy>(Point{ 20, 30 }, Point{ 30, 40 })); 


	// Объявляем вектор фигур
	std::vector<Shape> shapes;
	// Добавляем копии фигур в вектор
	shapes.emplace_back(rect);
	shapes.emplace_back(circle);

	// Рисуем все фигуры
	for (auto& shape : shapes)
	{
		shape.Draw(std::cout);
	}
}
