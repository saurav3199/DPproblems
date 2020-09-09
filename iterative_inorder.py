

class tree:
	def __init__(self , val = 0, left= None, right = None):
		self.val= val
		self.left = left
		self.right = right

node = tree(4)

node.left = tree(2)
node.left.left = tree(0)
node.left.right = tree(3)
node.right = tree(6)

def inorder(node):
	if node == None:
		return
	inorder(node.left)
	print(node.val)
	inorder(node.right)


def iterative_inorder(node):
	stack = list()
	stack.append(node)
	while len(stack) != 0:
		if node.left != None:
			node = node.left
			stack.append(node)
		else:
			node = stack.pop()
			print(node.val)
			if node.right != None:
				node =  node.right
				stack.append(node)

iterative_inorder(node)
# inorder(node)