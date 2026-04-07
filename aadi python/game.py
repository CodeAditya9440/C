import random
import time

# Crystal Maze Escape - Unique Python Game

def slow(text):
    for ch in text:
        print(ch, end="", flush=True)
        time.sleep(0.02)
    print()

class Player:
    def __init__(self):
        self.health = 100
        self.inventory = []
        self.crystals = 0

    def show_status(self):
        print("\n--- Player Status ---")
        print(f"Health: {self.health}")
        print(f"Crystals: {self.crystals}/3")
        print(f"Inventory: {', '.join(self.inventory) if self.inventory else 'Empty'}")
        print("---------------------\n")


def random_enemy():
    enemies = [
        ("Shadow Beast", 20, 40),
        ("Venom Serpent", 15, 25),
        ("Stone Golem", 25, 35)
    ]
    return random.choice(enemies)


def battle(player):
    enemy, low, high = random_enemy()
    slow(f"\n⚔️ A wild {enemy} appears!")

    while True:
        print("\n1. Attack")
        print("2. Heal (if potion available)")
        print("3. Run")
        choice = input("> ")

        if choice == "1":
            dmg = random.randint(10, 25)
            enemy_dmg = random.randint(low, high)

            slow(f"You strike the {enemy} for {dmg} damage!")
            slow(f"The {enemy} hits back for {enemy_dmg} damage!")

            player.health -= enemy_dmg

            if player.health <= 0:
                slow("💀 You have been defeated...")
                return False
            if random.random() < 0.4:
                slow(f"🔥 You defeated the {enemy}!")
                return True

        elif choice == "2":
            if "Healing Potion" in player.inventory:
                player.health += 40
                player.inventory.remove("Healing Potion")
                slow("✨ You used a Healing Potion! +40 HP")
            else:
                slow("❌ You don't have any potions!")

        elif choice == "3":
            if random.random() < 0.5:
                slow("🏃 You successfully escaped!")
                return True
            else:
                slow("❌ Could not escape!")
        else:
            slow("Invalid choice!")


def explore_room(player):
    slow("\n🚪 You enter a new chamber...")

    event = random.choice(["enemy", "crystal", "potion", "empty"])

    if event == "enemy":
        if not battle(player):
            return False

    elif event == "crystal":
        slow("💎 You found a glowing CRYSTAL!")
        player.crystals += 1

    elif event == "potion":
        slow("🧪 You found a Healing Potion!")
        player.inventory.append("Healing Potion")

    else:
        slow("Nothing here... just dust and silence.")

    return True


def game():
    slow("🌌 Welcome to CRYSTAL MAZE ESCAPE!")
    slow("Collect 3 crystals and reach the exit alive.\n")

    player = Player()

    while True:
        player.show_status()
        print("1. Explore a room")
        print("2. Quit Game")

        choice = input("> ")

        if choice == "1":
            if not explore_room(player):
                slow("GAME OVER!")
                break

            if player.crystals == 3:
                slow("\n✨ You found the exit door glowing with magic!")
                slow("🏆 YOU ESCAPED THE CRYSTAL MAZE!")
                break

        elif choice == "2":
            slow("Goodbye, adventurer!")
            break

        else:
            slow("Invalid input!")


if __name__ == "__main__":
    game()