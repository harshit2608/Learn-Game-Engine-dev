#pragma once

namespace R4DEngine
{
	class R4DVector3n
	{
	private:

	public:
		float x;
		float y;
		float z;

		R4DVector3n();
		R4DVector3n(float uX, float uY, float uZ);

		~R4DVector3n();

		R4DVector3n(const R4DVector3n& v);
		R4DVector3n& operator=(const R4DVector3n& v);
	};
}