#pragma once

class burbuja {
public:
	burbuja();
	void ordenar(int*, int*);
	bool cambiar(int*, int*);
	virtual bool op(int*, int*) = 0;
};
class descendente :public burbuja {
	virtual bool op(int*, int*);
};
class ascendente :public burbuja {
	virtual bool op(int*, int*);
};

