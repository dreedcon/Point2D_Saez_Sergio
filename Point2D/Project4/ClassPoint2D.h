class Point2D{

public:

	float x;
	float y;

public:

	Point2D(){ x = 0.0f; y = 0.0f; }
	Point2D(float _x, float _y){ x = _x; y = _y; }


	Point2D operator+ (const Point2D& a)const
	{
		Point2D tmp;
		tmp.x = x + a.x;
		tmp.y = y + a.y;
		return tmp;
	}


	Point2D operator- (const Point2D& a)const
	{
		Point2D tmp;
		tmp.x = x - a.x;
		tmp.y = y - a.y;
		return tmp;

	}

	Point2D operator+= (const Point2D& a)
	{

		x += a.x;
		y += a.y;
		return(*this);
	}

	Point2D operator-= (const Point2D& a)
	{

		x -= a.x;
		y -= a.y;
		return(*this);
	}

	Point2D operator= (const Point2D& a)
	{

		x = a.x;
		y = a.y;
		return(*this);
	}

	bool operator== (const Point2D& a)const
	{
		if (x == a.x && y == a.y)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!= (const Point2D& a)const
	{
		if (x != a.x || y != a.y)
		{
			return true;
		}
		else
		{
			return false;
		}

	}

	bool isZero()const
	{
		if (x == 0 && y == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	void SetZero()
	{
		x = 0.0f;
		y = 0.0f;
	}

	//what we do here is to calculate the distance between two points use Pitagoras
	float DistanceTo(const Point2D p)const
	{
		float Distance1;
		Distance1 = sqrt((x - p.x)*(x - p.x)) + ((y - p.y)*(y - p.y));
		return Distance1;
	}
};