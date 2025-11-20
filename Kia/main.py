def BinarySearch(lista: list, left: int, right: int, k: int) -> int:
    while left <= right:
        mid = (left + right) // 2
        if lista[mid] == k:
            return mid
        elif lista[mid] > k:
            right = mid - 1
        else:
            left = mid + 1
    return left * -1 - 1



class Persona:
    def __init__(self, nombre: str, apellido: str, edad: int) -> None:
        self.nombre = nombre
        self.apellido = apellido
        self.edad = edad
        
    def caminar(self) -> None:
        print(f"{self.nombre} está caminando...")
    
    
    def cambiar_datos(self, nombre: str, apellido: str, edad: int) -> None:
        """Cambia los datos de la persona."""
        self.nombre = nombre
        self.apellido = apellido
        self.edad = edad
        
        
        
        
        
        

persona1 = Persona("Kia", "frogsillo", 19)

print(f"Nombre: {persona1.nombre} | Apellido: {persona1.apellido} | Edad: {persona1.edad}")

persona1.caminar()
