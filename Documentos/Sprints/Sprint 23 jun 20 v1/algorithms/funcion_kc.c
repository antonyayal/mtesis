bool kc(int* estado){
	for (int i = 0; i < gridDim; i++)
		if (estado[i] != TERMINADO)
			return false;
	return true;
}