def find_final_leaf(N, M, leaves, commands):
    # Step 1: Sort leaves for efficient search
    leaves.sort()  # Sort leaves by x, then by y if x is the same
    
    # Step 2: Initialize Freddy's starting position
    current_position = leaves[0]
    leaf_set = set(leaves)
    leaf_set.remove(current_position)
    
    # Step 3: Process each command
    for command in commands:
        a, b = current_position
        new_position = None
        
        if command == 'A':
            # Move to (a + Z, b + Z) where Z > 0
            for Z in range(1, 100001):
                new_position = (a + Z, b + Z)
                if new_position in leaf_set:
                    current_position = new_position
                    leaf_set.remove(current_position)  # Leaf sinks
                    break
        elif command == 'B':
            # Move to (a + Z, b - Z) where Z > 0
            for Z in range(1, 100001):
                new_position = (a + Z, b - Z)
                if new_position in leaf_set:
                    current_position = new_position
                    leaf_set.remove(current_position)
                    break
        elif command == 'C':
            # Move to (a - Z, b + Z) where Z > 0
            for Z in range(1, 100001):
                new_position = (a - Z, b + Z)
                if new_position in leaf_set:
                    current_position = new_position
                    leaf_set.remove(current_position)
                    break
        elif command == 'D':
            # Move to (a - Z, b - Z) where Z > 0
            for Z in range(1, 100001):
                new_position = (a - Z, b - Z)
                if new_position in leaf_set:
                    current_position = new_position
                    leaf_set.remove(current_position)
                    break
        
    # Step 4: Return Freddy's final position
    return current_position

# Read inputs from the user
N, M = map(int, input())
commands = input()
leaves = []


# Read the positions of the leaves
for _ in range(N):
    x, y = map(int, input().split())
    leaves.append((x, y))

# Call the function to find the final leaf position
final_position = find_final_leaf(N, M, leaves, commands)

# Output the final position
print(final_position)
