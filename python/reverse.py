def reverse_list(a):
  print('old:', a)
  n = len(a)
  for i in range(n // 2):
    j = n - i - 1
    a[i], a[j] = a[j], a[i]
  print('new:', a)
  return 2

if __name__ == '__main__':
  print(reverse_list(list(range(5))))
  reverse_list(list(range(10)))