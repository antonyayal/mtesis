	void sortfile(FILE *fp, int N){
		char *data;


		data = (char *)malloc(N);


		fread(data,1,N,fp);


		qsort(data, N, 1, compare);


		
		use_data(data);

		free(data);
	}