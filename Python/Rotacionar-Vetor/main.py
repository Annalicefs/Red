import numpy as np

def rotacionarVetores(vetor, angulo):

  matriz = [[np.cos(angulo), -np.sin(angulo)],
            [np.sin(angulo), np.cos(angulo)]]

  V_rotacionado = np.matmul(matriz, vetor)

  return V_rotacionado

x1 = float(input())
y1 = float(input())
angulo = float(input())

vetor = [[x1],[y1]]

print(rotacionarVetores(vetor, np.deg2rad(angulo)))