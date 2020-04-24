bool kc(int* estado, int* gridDim){
	for (int i = 0,j = 0; i < *gridDim; i++){
		if (estado[i] == TERMINADO)
		j++;
	}
	if(j == *gridDim)
		return true;
	return false;
}