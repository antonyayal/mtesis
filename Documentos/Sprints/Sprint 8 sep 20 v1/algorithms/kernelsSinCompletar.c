Task K_nc kernelsSinCompletar(struct Task** K_run){

	Task K_nc[]; //Kernels sin completar
	Task task;

	for (int i = 0; i < K_run.length(); i++){
		task = K_run[i];

		if(task.kernel_completado == false){
			K_nc.insert(task);
		}
	}
	return K_nc;
}