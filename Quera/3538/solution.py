s=["shanbe","1shanbe","2shanbe","3shanbe","4shanbe","5shanbe","jome"]
k=0

for i in range(3):
	n=input()
	x=list(input().split())
	l=len(x)
	for w in range(0,l):
		for j in range(7) :
			#print(s[j])
			if s[j]==x[w] :
				k+=1
				s[j]="0"
print(7-k)
