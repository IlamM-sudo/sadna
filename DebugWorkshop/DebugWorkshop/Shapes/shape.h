#ifndef __SHAPE_H__
#define __SHAPE_H__

class Shape 
{
private:
	float _area;
	float _perimeter;

public:
	Shape();
	virtual float get_area(bool has_depth = false) const; //made the get_area functions the same so i could override it in triangle

};

#endif	// __SHAPE_H__
