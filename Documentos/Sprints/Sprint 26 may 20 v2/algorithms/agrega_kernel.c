
int agrega_kernel_planificador(int blockDim, int gridDim, bool* continuar_eje, bool* kernel_completado){
	Task task;
	task.costo = blockDim * gridDim;
	task.continuar_eje = continuar_eje;
	task.kernel_completado = kernel_completado;
	
	K_req.insert(task);//Set de kernels que solicitan recrursos en GPU
}