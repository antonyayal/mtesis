		void sortfile(FILE *fp, int N){
		char *h_data;
		char *d_data;

		h_data = (char *)malloc(N);
		cudaMalloc(&d_data, N);

		fread(data,1,N,fp);

		cudaMemcpy(d_data, h_data, N, cudaMemcpyHostToDevice);
		qsort<<<...>>>(h_data, N, 1, compare);
		cudaDeviceSynchronize();
		cudaMemcpy(&h_data, d_data, N, cudaMemcpyDeviceToHost);

		use_data(h_data);
		cudaFree(d_data);
		free(h_data);
	}