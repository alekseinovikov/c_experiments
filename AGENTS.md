# Repository Guidelines

## Project Structure & Module Organization
- `main.c` holds the single C program entry point.
- `Makefile` defines build, run, and clean targets.
- `hello` is the compiled binary output (generated).
- `main.dSYM/` contains debug symbols (generated on macOS).

If you add more C files, keep them in the repository root or group them under a new `src/` directory and update the `Makefile` accordingly.

## Build, Test, and Development Commands
- `make` or `make all`: compile `main.c` into the `hello` binary.
- `make run`: build (if needed) and run `./hello`.
- `make clean`: remove the compiled binary (`hello`).

Examples:
```sh
make
make run
```

## Coding Style & Naming Conventions
- Indentation: 4 spaces; no tabs.
- Keep functions small and focused; prefer early returns for error handling.
- Naming: `snake_case` for variables and functions; `UPPER_SNAKE_CASE` for constants.
- Compile with warnings enabled (already in `Makefile`: `-Wall -Wextra -Wpedantic`).

## Testing Guidelines
- No automated tests are currently set up.
- If you add tests, place them under `tests/` and document how to run them (e.g., `make test`).

## Commit & Pull Request Guidelines
- This directory is not a Git repository, so there is no commit history to infer conventions from.
- If you initialize Git, use short, imperative commit messages (e.g., "Add fork example").
- For pull requests, include a brief description, steps to run, and output samples if behavior changes.

## Security & Configuration Tips
- Avoid committing generated artifacts like `hello` and `main.dSYM/`; add them to `.gitignore` if Git is initialized.
- Keep system-specific paths out of source files and build scripts.
