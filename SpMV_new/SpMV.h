#define REAL float

#ifdef __cplusplus
extern "C" {
#endif
extern double spmv_cuda_csr_discrete(const int num_rows, const REAL * x, int nnz, REAL* matrix, REAL *y_normal);
extern double spmv_cuda_dense_discrete(const int num_rows, const REAL * x, int nnz, REAL* matrix, REAL *y_normal);
extern double warmingup(const int num_rows, const REAL * x, int nnz, REAL* matrix, REAL *y_normal);
extern void init_csr(int *ptr, REAL *data, int *indices, REAL *matrix, int num_rows, int nnz);
extern double warmingup_dense(const int num_rows, const REAL * x, int nnz, REAL* matrix, REAL *y);
extern double warmingup_csr(const int num_rows, const REAL * x, int nnz, REAL* matrix, REAL *y);
//extern void init_ptr(int *ptr, REAL * matrix, int num_rows, int nnz);
extern double read_timer_ms();
#ifdef __cplusplus
}
#endif
