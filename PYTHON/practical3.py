def matrix_multiplication(matrix1, matrix2):
    result = [[0 for _ in range(len(matrix2[0]))] for _ in range(len(matrix1))]

    for i in range(len(matrix1)):
        for j in range(len(matrix2[0])):
            for k in range(len(matrix2)):
                result[i][j] += matrix1[i][k] * matrix2[k][j]

    return result

def input_matrix(rows, columns):
    matrix = []
    print(f"Enter {rows} rows and {columns} columns for the matrix:")
    for i in range(rows):
        row = []
        for j in range(columns):
            element = int(input(f"Enter element at position ({i+1},{j+1}): "))
            row.append(element)
        matrix.append(row)
    return matrix

rows1 = int(input("Enter the number of rows for the first matrix: "))
columns1 = int(input("Enter the number of columns for the first matrix: "))
rows2 = int(input("Enter the number of rows for the second matrix: "))
columns2 = int(input("Enter the number of columns for the second matrix: "))

if columns1 != rows2:
    print("Matrix multiplication is not possible!")
else:
    matrix1 = input_matrix(rows1, columns1)
    matrix2 = input_matrix(rows2, columns2)

    result_matrix = matrix_multiplication(matrix1, matrix2)

    print("Result of matrix multiplication:")
    for row in result_matrix:
        print(row)
