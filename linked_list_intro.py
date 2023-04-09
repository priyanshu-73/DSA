class Node:
	def __init__(self, value):
		self.data = value
		self.next = None


class LinkedList:
	def __init__(self):
		# Empty linked list
		self.head = None
		self.n = 0

	def __len__(self):
		# no. of nodes in LL
		return self.n

	def insert_head(self, value):

		# new node
		new_node = Node(value)

		# create connection
		new_node.next = self.head

		# reassign head
		self.head = new_node
		self.n = self.n + 1

	def insert_tail(self, value):

		new_node = Node(value)
		if self.head == None:
			# empty
			self.head = new_node
			self.n = self.n + 1
		curr = self.head
		while curr.next != None:
			curr = curr.next

		curr.next = new_node
		self.n = self.n + 1

	def insert_after(self, pos, value):
		new_node = Node(value)
		curr = self.head
		while curr != None:
			if curr.data == pos:
				break
			curr = curr.next
		# case 1 : item mil gya i.e. curr --> not none
		if curr != None:
			new_node.next = curr.next
			curr.next = new_node
			self.n = self.n + 1
		# case 2 : item nahi mila i.e. curr --> none
		else:
			return 'item not found'

	def clear(self):
		self.head = None
		self.n = 0

	def del_head(self):
		if self.head == None:
			return 'empty linked list'
		self.head = self.head.next
		self.n = self.n - 1

	def del_tail(self):
		curr = self.head

		if curr.next == None:
			# if there is only 1 element in LL wo head hi hoga
			self.del_head()

		if self.head == None:
			return 'empty LL'

		while curr.next.next != None:
			curr = curr.next

		curr.next = None
		self.n = self.n-1

	def remove(self, value):
		if self.head == None:
			return 'empty LL'
		if self.head.data == value:
			return self.del_head()
		curr = self.head
		while curr.next != None:
			if curr.next.data == value:
				break
			curr = curr.next
		if curr.next == None:
			return 'item not found'
		else:
			curr.next = curr.next.next
			self.n = self.n - 1

	def search(self, item):
		curr = self.head
		pos = 0
		while curr != None:

			if curr.data == item:
				return pos
			curr = curr.next
			pos = pos + 1
		return 'item not found'

	def __getitem__(self, index):
		curr = self.head
		pos = 0
		while curr != None:
			if pos == index:
				return curr.data
			curr = curr.next
			pos = pos + 1
		return 'index out of range'

	def del_by_index(self, index):
		self.remove(self.__getitem__(index))

	def __str__(self):
		curr = self.head
		result = ''
		while curr != None:
			result = result + str(curr.data) + '-->'
			print(curr.data)
			curr = curr.next

		return result[:-3]


L = LinkedList()
L.insert_head(1)
L.insert_head(2)
L.insert_head(3)
L.insert_tail(4)
L.insert_after(1, 309)
L.del_by_index(3)
print(L)
