from dataclasses import dataclass
import typing

@dataclass
class Person:
    drank: list[tuple[int, int]]
    sick: int
    
    def possible_milk(self) -> set[int]:
        r = {x[0] for x in self.drank if x[1] < self.sick}
        return r


N, M, D, S = (int(x) for x in input().split())
people = []
for _ in range(N):
    people.append(Person([], 2**31 - 1))


for _ in range(D):
    p, m, t = (int(x) for x in input().split())
    people[p - 1].drank.append((m, t))

for _ in range(S):
    p, t = (int(x) for x in input().split())
    people[p - 1].sick = t
    

possible = set()
for p in people:
    possible |= p.possible_milk()

print(possible)
