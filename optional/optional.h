#pragma once

#include <cassert>
#include <stdexcept>
#include <utility>

// Исключение этого типа должно генерироватся при обращении к пустому optional
class BadOptionalAccess : public std::exception
{
public:
	using exception::exception;

	const char* what() const noexcept override
	{
		return "Bad optional access";
	}
};

template <typename T>
class Optional
{
public:
	Optional() = default;

	Optional(const T& value)
	{
		new (m_data) T(value);
		m_isInitialized = true;
	}

	Optional(T&& value)
	{
		new (m_data) T(std::move(value));
		m_isInitialized = true;
	}

	Optional(const Optional& other)
	{
		/* Реализуйте копирующий конструктор для класса Optional */
	}

	Optional(Optional&& other)
	{
		/* Реализуйте перемещающий конструктор для класса Optional */
	}

	Optional& operator=(const T& value)
	{
		/* Реализуйте эту операцию присваивания */
		return *this;
	}

	Optional& operator=(T&& rhs)
	{
		/* Реализуйте эту операцию присваивания */
		return *this;
	}

	Optional& operator=(const Optional& rhs)
	{
		/* Реализуйте копирующий оператор присваивания */
		return *this;
	}

	Optional& operator=(Optional&& rhs)
	{
		/* Реализуйте перемещающий оператор присваивания */
		return *this;
	}

	~Optional()
	{
		Reset();
	}

	bool HasValue() const
	{
		return m_isInitialized;
	}

	// Операторы * и -> не должны делать никаких проверок на пустоту Optional.
	// Эти проверки остаются на совести программиста
	T& operator*()
	{
		assert(m_isInitialized);
		return *reinterpret_cast<T*>(&m_data[0]);
	}

	const T& operator*() const
	{
		assert(m_isInitialized);
		return *reinterpret_cast<const T*>(&m_data[0]);
	}

	T* operator->()
	{
		assert(m_isInitialized);
		return reinterpret_cast<T*>(m_data);
	}

	const T* operator->() const
	{
		assert(m_isInitialized);
		return reinterpret_cast<const T*>(m_data);
	}

	// Метод Value() генерирует исключение BadOptionalAccess, если Optional пуст
	T& Value()
	{
		/* Реализуйте метод Value */
		throw std::logic_error("Not implemented");
	}

	const T& Value() const
	{
		/* Реализуйте метод Value */
		throw std::logic_error("Not implemented");
	}

	void Reset()
	{
		if (m_isInitialized)
		{
			Value().~T();
			m_isInitialized = false;
		}
	}

	template <typename... Args>
	void Emplace(Args&&... args)
	{
		/* Реализуйте метод Emplace */
	}

	// Обменивает текущее значение optional с переданным (аналогично std::optional)
	void Swap(Optional& other)
	{
		/* Реализуйте метод Swap */
	}

private:
	// alignas нужен для правильного выравнивания блока памяти
	alignas(T) char m_data[sizeof(T)];
	bool m_isInitialized = false;
};
