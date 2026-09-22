"""Create a publication ZIP without originals, binaries or Git history."""
from pathlib import Path
import zipfile

ROOT = Path(__file__).resolve().parents[1]


def public_files():
    names = ["README.md", "CREDITS.md", ".gitignore"]
    patterns = ["labs/*/*.c", "docs/*.md", "docs/*.json", "scripts/*.py", "tests/*.py", "tests/*.c", "examples/*.txt", ".github/workflows/*.yml"]
    paths = [ROOT / name for name in names]
    for pattern in patterns:
        paths.extend(ROOT.glob(pattern))
    return sorted(set(paths))


def main():
    target = ROOT / "dist/aps105-c-portfolio.zip"
    target.parent.mkdir(exist_ok=True)
    with zipfile.ZipFile(target, "w", zipfile.ZIP_DEFLATED) as out:
        for path in public_files():
            if not path.resolve().is_relative_to(ROOT):
                raise ValueError("File outside repository")
            out.write(path, path.relative_to(ROOT).as_posix())
    print(target)


if __name__ == "__main__":
    main()
