# Doubly linked list

- Kad Deque butu su pointeriais naudojama Doubly Linked list
- Node (DLL) struktura
   -  data
   -  pointeris i prev Node
   -  pointeris i next Node
   -  getNode - sukurti nauja node su data bei null pointeriais

# Deque

- Deque struktura
   - Node prev
   - Node next
   - size

## Insert in front

1. Sukuriam nauja Node
2. Jei deque yra tuscias nauja Node istatome i Deque front ir rear
3. Jei deque turi kitu Node's
   1. Naujo Node pointeris next nukreipiamas i priekyje esanti Node
   2. O priekyje esancio Node prev pointeris nukreipiamas i nauja Node
   3. Deque front pointeris nukreipiamas i nauja Node
4. Deque dydis padidinamas

## Insert in front

1. Sukuriam nauja Node
2. Jei deque yra tuscias nauja Node istatome i Deque front ir rear
3. Jei deque turi kitu Node's
   1. Naujo Node pointeris prev nukreipiamas i gale esanti Node
   2. O gale esancio Node next pointeris nukreipiamas i nauja Node
   3. Deque rear pointeris nukreipiamas i nauja Node
4. Deque dydis padidinamas

## Delete front

1. Sukuriam temp Node kuris nukreipiamas i priekyje esanti Node
2. Nukreipiam priekyje esanti Node i salia  esanti Node (next)
3. Jei next node yra null
   1. rear node pointeri padarome null taip pat
4. Jei deque turi kitu Node's
   1. Tai node esancio salia priekinio node pointeri padarome null
5. Istriname priekini node
6. Deque dydi sumaziname

## Delete rear

1. Sukuriam temp Node kuris nukreipiamas i gale esanti Node
2. Nukreipiam gale esanti Node i salia  esanti Node (prev)
3. Jei prev node yra null
   1. front node pointeri padarome null taip pat
4. Jei deque turi kitu Node's
   1. Tai node esancio salia paskutinio node pointeri padarome null
5. Istriname paskutini node
6. Deque dydi sumaziname
