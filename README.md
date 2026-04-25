# Elderpunk

Elderpunk is an Unreal Engine 5.3 third-person game project targeting Windows.
Most gameplay content lives in Blueprints and assets under `Content/`, with a small C++ module in `Source/`.

## Repository

```bash
git clone https://github.com/Xela-dev/Elderpunk.git
cd Elderpunk
```

## Requirements

- Windows 10 or Windows 11
- Unreal Engine 5.3 (project `EngineAssociation` is `5.3`)
- Visual Studio 2022 with C++ game development tooling
  - A recommended Visual Studio component list is included in `.vsconfig`

## Open The Project

1. Open `Elderpunk_version_2.uproject` in Unreal Engine 5.3.
2. If prompted to build missing modules, choose **Yes**.
3. Wait for shaders/assets to finish loading.
4. Press **Play** in the editor.

Default map settings point to:
- `EditorStartupMap`: `/Game/Scene/Main.Main`
- `GameDefaultMap`: `/Game/Scene/Main.Main`

## Build (Optional, C++)

If you want to compile from Visual Studio:

1. Generate project files from the `.uproject` (right-click `.uproject` -> Generate Visual Studio project files).
2. Open the generated solution.
3. Build target `Elderpunk_version_2Editor` in `Development Editor | Win64`.

## Project Structure

- `Config/` Unreal project settings (maps, input, rendering, packaging)
- `Content/` Blueprints, maps, models, UI, animations, and other game assets
- `Source/` C++ module (`Elderpunk_version_2`)
  - `Door/RoomDoorsMap.*` contains door-direction and room transition helper logic
  - `Private/`, `Public/` include module source and headers

## Input Actions

Enhanced Input action assets are under `Content/ThirdPerson/Input/Actions/`:

- `IA_Move`
- `IA_Look`
- `IA_Jump`
- `IA_Run`
- `IA_Crouch`
- `IA_Combat`
- `IA_PickUp`
- `IA_RestartLevel`

## Branches

Remote branches currently include:

- `main`
- `dev`
- `art`
- `dev_/add_enemy_for_player`
- `dev_/teleport`
