//specification file for the Rectangle class
#ifndef Recangle_H
#define Rectangle_H

//rectangle class declaration

class Rectangle
{
		private:
			double width;
			double length;

		public:
			void setWidth(double);
			void setLength(double);
			double getArea() const;
};
#endif