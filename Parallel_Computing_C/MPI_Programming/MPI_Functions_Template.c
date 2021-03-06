#include <stdio.h>
#include <string.h>
#include <mpi.h>

int main(void){
	int	comm_sz;
	int my_rank;

	MPI_Init(NULL, NULL);
	MPI_Comm_size(MPI_COMM_WORLD, &comm_sz);
	MPI_Comm_rank(MPI_COMM_WORLD, &my_rank);


	MPI_Finalize();
	return 0;
}


int MPI_Send(
    void*           msg_buf_p,
    int             msg_size,
    MPI_Datatype    msg_type,
    int             dest,
    int             tag,
    MPI_Comm        communicator);

int MPI_Send(msg_buf_p, msg_size, msg_type, dest, tag, communicator);

int MPI_Recv(
    void*           msg_buf_p,
    int             buf_size,
    MPI_Datatype    buf_type,
    int             source,             // MPI_ANY_SOURCE
    int             tag,
    MPI_Comm        communicator,
    MPI_Status      status_p);          // MPI_STATUS_IGNORE

int MPI_Recv(msg_buf_p, buf_size, buf_type, source, tag, communicator, status_p);   

int MPI_Sendrecv(
    void*           send_buf_p,
    int             send_buf_size,
    MPI_Datatype    send_buf_type,
    int             dest,
    int             send_tag,
    void*           recv_buf_p,
    int             recv_buf_size,
    MPI_Datatype    recv_buf_type,
    int             source,
    int             recv_tag,
    MPI_Comm        communicator,
    MPI_Status*     status_p
)

int MPI_Sendrecv(send_buf_p, send_buf_size, send_buf_type, dest, send_tag, recv_buf_p, 
                recv_buf_size, recv_buf_type, source, recv_tag, communicator, status_p)


int MPI_Reduce(
    void*           input_data_p,
    void*           output_data_p,
    int             count,
    MPI_Datatype    datatype,
    MPI_Op          operator,
    int             dest_process,
    MPI_Comm        comm);

int MPI_Reduce(input_data_p, output_data_p, count, datatype, operator, dest_process, comm);

int MPI_Allreduce(
    void*           input_data_p,
    void*           output_data_p,
    int             count,
    MPI_Datatype    datatype,
    MPI_Op          operator,
    MPI_Comm        comm);

int MPI_Allreduce(input_data_p, output_data_p, count, datatype, operator, comm);

int MPI_Bcast(
    void*           data_p,
    int             count,
    MPI_Datetype    datatype,
    int             source_proc,
    MPI_Comm        comm);

int MPI_Bcast(data_p, count, datatype, source_proc, comm);

int MPI_Scatter(
    void*           send_buf_p,
    int             send_count,
    MPI_Datatype    send_type,
    void*           recv_buf_p,
    int             recv_count,
    MPI_Datatype    recv_type,
    int             src_proc,
    MPI_Comm        comm);

int MPI_Scatter(send_buf_p, send_count, send_type, recv_buf_p, recv_count, recv_type, src_proc, comm);

int MPI_Gather(
    void*           send_buf_p,
    int             send_count,
    MPI_Datatype    send_type,
    void*           recv_buf_p,
    int             recv_count,
    MPI_Datatype    recv_type,
    int             dest_proc,
    MPI_Comm        comm);
int MPI_Gather(send_buf_p, send_count, send_type, recv_buf_p, recv_count, recv_type, dest_proc, comm);

int MPI_Gather(send_buf_p, send_count, send_type, recv_buf_p, recv_count, recv_type, dest_proc, comm);

int MPI_Allgather(
    void*           send_buf_p,
    int             send_count,
    MPI_Datatype    send_type,
    void*           recv_buf_p,
    int             recv_count,
    MPI_Datatype    recv_type,
    MPI_Comm        comm);

int MPI_Allgather(send_buf_p, send_count, send_type, recv_buf_p, recv_count, recv_type, comm);

/* Predefined Reduction Operators in MPI
MPI_MAX
MPI_MIN
MPI_SUM
MPI_PROD
MPI_LAND
MPI_BAND
MPI_LOR
MPI_BOR
MPI_LXOR
MPI_BXOR
MPI_MAXLOC
MPI_MINLOC
************************************* */


int MPI_Scan(
    void*           sendbuf_p,
    void*           recvbuf_p,
    int             count,
    MPI_Datatype    datatype,
    MPI_Op          operator,
    MPI_Comm        comm);

int MPI_Scan(sendbuf_p, recvbuf_p, count, datatype, operator, comm);