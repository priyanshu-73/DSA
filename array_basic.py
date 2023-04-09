import ctypes


class MeraList:

	def __init__(self):
		self.size = 1
		self.n = 0
		self.a = self.__make_array(self.size)

	def __len__(self):
		return self.n

	def append(self ,item):
		if self.n == self.size:
			self.__resize(self.size*2)

		self.a[self.n] = item
		self.n = self.n+1

	def pop(self):
		if self.n == 0:
			return 'empty list'
		else:
			print(self.a[self.n-1])
			self.n = self.n-1

	def clear(self):
		self.n = 0
		self.size = 1

	def find(self, item):
		for i in range(self.n):
			if self.a[i] == item:
				return i
		return 'ValueError'

	def insert(self, pos, item):
		if self.n == self.size:
			self.__resize(self.size*2)

		for i in range(self.n, pos, -1):
			self.a[i] = self.a[i-1]

		self.a[pos] = item
		self.n = self.n + 1

	def __delitem__(self, pos):
		if 0 <= pos <= self.n:
			for i in range(pos, self.n-1):
				self.a[i] = self.a[i+1]

			self.n = self.n - 1

	def remove(self, item):
		pos = self.find(item)
		if type(pos) == int:
			self.__delitem__(pos)
		else:
			return pos

	def sort(self,order = 'asc'):
		for i in range(self.n):
			for j in range(self.n-i-1):
				if order == 'asc':
					if str(self.a[j]) > str(self.a[j+1]):
						self.a[j], self.a[j+1] = self.a[j+1], self.a[j]
				elif order == 'desc':
					if str(self.a[j]) < str(self.a[j+1]):
						self.a[j], self.a[j+1] = self.a[j+1], self.a[j]

	def __resize(self, new_capacity):
		b = self.__make_array(new_capacity)
		self.size = new_capacity
		for i in range(self.n):
			b[i] = self.a[i]
		#reassign a
		self.a = b

	def __str__(self):
		result = ''
		for i in range(self.n):
			result = result + str(self.a[i]) + ','
		return '[' + result[:-1] + ']'

	def __getitem__(self, index):
		if 0 <= index <= self.n:
			return self.a[index]
		else:
			return 'typeError : index out of range'

	def __make_array(self, capacity):
		return (capacity*ctypes.py_object)()


l = MeraList()
l.append('hello')
l.append(1)
l.append(67.8)
l.insert(1, 5)
l.insert(2, 'world')
l.__delitem__(100)
l.remove(67.8)
l.sort()
print(l)