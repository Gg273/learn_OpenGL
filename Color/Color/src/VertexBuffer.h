#pragma once

#include <glad\glad.h>

class VertexBuffer
{
public:
	VertexBuffer(unsigned int count, float* value);
	~VertexBuffer();
	void Bind() const;
	void Unbind() const;
private:
	unsigned int m_VB;
};

