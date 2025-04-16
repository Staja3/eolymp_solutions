#include <mpi.h>
#include <iostream>

int main(int argc, char** argv) {
    // Ініціалізація MPI
    MPI_Init(&argc, &argv);

    // Отримання ідентифікатора процесу та кількості процесів
    int world_rank;
    int world_size;
    MPI_Comm_rank(MPI_COMM_WORLD, &world_rank);
    MPI_Comm_size(MPI_COMM_WORLD, &world_size);

    // Виведення повідомлення від кожного процесу
    std::cout << "Hello, World! I am process " << world_rank 
              << " of " << world_size << " processes." << std::endl;

    // Завершення роботи MPI
    MPI_Finalize();

    return 0;
}
