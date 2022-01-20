s1, s2, s3 = map(input().split())
sol=''

if s1[1] == '<' and s2[1] == '<':
    if s3[1] == '>': sol='acb'
    else: sol = 'abc'

elif s1[1] == '>' and s2[1] == '>':
    if s3[1] == '>': sol = 'cba'
    else: sol = 'bca'

elif s1[1] == '<' and s2[1] == '>': sol = 'cab'

elif s1[1] == '>' and s2[1] == '<': sol = 'bac'

elif s1[1] == '=':
    if s2[1] == '>': sol='cba'
    else: sol = 'abc'

print(sol)