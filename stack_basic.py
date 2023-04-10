class Node:
	def __init__(self, value):
		self.data = value
		self.next = None


class Stack:
	def __init__(self):
		self.top = None

	def isempty(self):
		return self.top == None

	def push(self, value):
		new_node = Node(value)
		new_node.next = self.top
		self.top = new_node

	def peak(self):
		if self.isempty():
			return 'stack is empty'
		return self.top.data

	def pop(self):
		if self.isempty():
			return 'stack is empty'
		else:
			data = self.top.data
			self.top = self.top.next
			return data

	def reversed_string(self, text):
		s = Stack()
		for i in text:
			s.push(i)
		res = ''
		while not s.isempty():
			res = res + s.pop()
		return res

	def text_editor(self, text, pattern):
		u = Stack()
		r = Stack()
		for i in text:
			u.push(i)

		for i in pattern:
			if i == 'u':
				data = u.pop()
				r.push(data)
			elif i == 'r':
				data = r.pop()
				u.push(data)
		res = ''
		while not u.isempty():
			res = u.pop() + res

		return res

	def traverse(self):
		curr = self.top
		while curr != None:
			print(curr.data)
			curr = curr.next

 
s = Stack()
print(s.text_editor('hello', 'uurrr'))



