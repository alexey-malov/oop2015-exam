﻿// Task08.cpp : Defines the entry point for the console application.
//

#include <iostream>
#include <string>

/* 
Интерфейс объектов, способных сохранять (SaveTo) и 
восстанавливать (RestoreFrom) своё состояние из/в стандартных потоков чтения/записи
В случае ошибки выбрасывают исключения runtime_error
*/
class ISerializable
{
	/* Написать недостающий код */
};

/* Интерфейс объектов, которые могут быть нарисованы (Draw) на холсте (canvas) */
class ICanvasDrawable
{
	/* Написать недостающий код */
};

/* Интерфейс холста. Позволяет рисовать отрезки прямых линий и эллипсы */
class ICanvas
{
	/* Написать недостающий код */
};

/* Интерфейс объектов, умеющих говорить (Speak). */
class ISpeakable
{

};

/* Прямоугольник. Может быть нарисован на холсте, а также является сериализуемым */
class Rectangle /* Написать недостающий код */

{
	/* Написать недостающий код */

};

/* Эллипс. Может быть нарисован на холсте, а также является сериализуемым */
class Ellipse /* Написать недостающий код */
{
	/* Написать недостающий код */
};

/* Треугольник. Может быть нарисован на холсте, а также является сериализуемым */
class Triangle /* Написать недостающий код */
{
	/* Написать недостающий код */
};

/* Холст. Вместо фактического рисования выводит в cout команды рисования и их параметры */
class CoutCanvas /* Написать недостающий код */
{
	/* Написать недостающий код */
};

/* Кот. Обладает координатами (в центре головы). Может быть нарисован на холсте 
 может говорить (мяукая) */
class Cat /* Написать недостающий код */
{
	/* Написать недостающий код */
};

/* Человек. Обладает именем и годом рождения.
может говорить (называет своё имя и год рождения) */
class Person
{

};

/* Ведёт разговор с набором объектов, с которыми можно побеседовать */
void SmallTalk(/* Написать недостающий код */)
{
	/* Написать недостающий код, заставляющий беседовать с объектами */
}

/* Рисует набор объектов, которые можно нарисовать на переданном холсте (принимает объекты и холст) */
void Draw(/* Написать недостающий код */)
{
	/* Написать недостающий код */
}

/* Копирует состояние из одного сериализуемого объекта в другой */
void CopyState(const ISerializable& from, ISerializable& to)
{
	/* Написать недостающий код */
}

int main()
{
	/*
	Нарисовать при помощи функции Draw домик с котиком рядом с ним:
	    /\
	   /  \
	  / O  \
	 --------
	  |    |
	  |    |
	  ------
		до 8 баллов (8-6-4)
	*/

	/* Создать прямоугольник. 
	 Скопировать в него при помощи CopyState состояние из прямоугольника, 
	 задающего стены дома
		до 6 баллов (6-5-3)
	*/

	/*
	Создать человека по имени Ivanov Ivan 1980 года рождения. 
	При помощи SmallTalk побеседовать с этим человеом и вышесозданным котом
		до 6 баллов (6-5-3)
	*/

	return 0;
}
