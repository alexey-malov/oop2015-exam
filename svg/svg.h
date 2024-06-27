#pragma once
#include <iostream>
#include <string>
#include <vector>

struct Point
{
	double x = 0.0;
	double y = 0.0;
};

struct Size
{
	double width = 0.0;
	double height = 0.0;
};

class SVGObject
{
public:
	virtual void Render(std::ostream& out) const = 0;

	virtual ~SVGObject() = default;
};

using Color = std::string;

class PathProps
{
public:
	void SetFill(Color fill)
	{
		m_fill = std::move(fill);
	}
	void SetStroke(Color stroke)
	{
		m_stroke = std::move(stroke);
	}

protected:
	~PathProps() = default;

	void RenderAttributes(std::ostream& out) const
	{
	}

private:
	Color m_fill;
	Color m_stroke;
};

class Circle : public SVGObject
{
public:
	void SetCenter(Point center)
	{
		m_center = center;
	}

	void SetRadius(double radius)
	{
		m_radius = radius;
	}

private:
	Point m_center;
	double m_radius = 0.0;
};

class Polyline : public SVGObject
{
public:
	void AddPoint(Point p)
	{
		m_points.emplace_back(p);
	}

private:
	std::vector<Point> m_points;
};

class Image : public SVGObject
{
public:
	Image(std::string href, Size size)
		: m_href(std::move(href))
		, m_size(size)
	{
	}

private:
	std::string m_href;
	Size m_size;
};