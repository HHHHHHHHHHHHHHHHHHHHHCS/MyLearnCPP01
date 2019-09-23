#pragma once

class _07_16_NestedTypesInClasses
{
public:

	class Fruit
	{
	public:
		// Note: we've moved FruitType inside the class, under the public access specifier
		enum FruitType
		{
			APPLE,
			BANANA,
			CHERRY
		};

	private:
		FruitType m_type;
		int m_percentageEaten = 0;

	public:


		Fruit(FruitType type) :
			m_type(type)
		{
		}

		FruitType getType() { return m_type; }
		int getPercentageEaten() { return m_percentageEaten; }
	};

	static void Test();
	static void Test01();
};
