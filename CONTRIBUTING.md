# Contributing to ADF: Re-Cut

Cheers for taking an interest. ADF: Re-Cut is community-driven and we welcome help across configs, scripts, models, textures, and documentation.

## What you can contribute

**Code, configs, scripts, textures** — open a PR, no permission needed (except maintainer review before merge). Bug fixes, balance tweaks, performance improvements, new features, all welcome.

**Models** — we're cautious here because of the licensing split. If you want to contribute a new `.p3d` (your own work, or APL-SA from another community mod), open an issue or hit @IsoBones on Discord first to discuss integration and licensing. See [ASSETS_LICENSE.md](ASSETS_LICENSE.md) and [DEV_LICENSE.md](DEV_LICENSE.md).

**Major refactors / breaking changes** — open an issue first, let's talk through the approach before you sink time into it.

**Documentation** — always wanted, never enough.

**What you can't contribute** - modifications to the legacy protected models (they're not in this repo and they're not yours to modify), or assets ripped from other mods without proper licensing.

## Git LFS

This repo uses Git LFS for `.paa` texture files to keep clones lean.

Install Git LFS before cloning:
​```bash
git lfs install
​```

Most modern Git installs include LFS already. If not:
- **Windows:** included with recent Git for Windows, or `winget install GitHub.GitLFS`
- **macOS:** `brew install git-lfs`
- **Linux:** `apt install git-lfs` (or your distro equivalent)

If you cloned before installing LFS and see tiny text files where textures should be, run:

​```bash
git lfs install
git lfs pull
​```

GitHub Desktop handles LFS automatically, no extra setup needed beyond having git-lfs installed on your system.



## Workflow

```bash
# Fork, then:
git clone https://github.com/<you>/ADFrecut.git
cd ADFrecut
git checkout -b feature/your-thing    # or fix/your-thing
```

Make your changes, test locally (see below), then:

```bash
git commit -m "Clear description of what changed and why"
git push origin feature/your-thing
```

**Or even easier, use the GitHub Desktop application to manage your fork!**

Open a PR against `main`. PRs are reviewed and merged by @IsoBones.

## Testing locally

You don't need to build the full mod to test changes. The workflow is:

1. **Get the mod locally.** Subscribe to [ADF: Re-Cut on the Workshop](https://steamcommunity.com/sharedfiles/filedetails/?id=2971219389) so Steam downloads it. Find the local install (usually under `Steam/steamapps/workshop/content/107410/2971219389`).

2. **Unpack the PBO you're modifying** using PBO Manager, PboProject, or similar. Drop the unpacked addon somewhere you can work on it.

3. **Apply your modified files** from your branch over the unpacked addon.

4. **Repack the addon** ('dirty' is fine — using PBO Manager / PboProject without a clean rebuild). Note: binarised models in the PBO can occasionally cause issues when repacking dirty. This is a known annoyance — work around it as best you can and flag it in the PR if relevant.

5. **Load locally with only your modified mod and CBA_A3.** Don't load every mod you've got — isolate the test so you know what's actually being exercised.

6. **Check the RPT for errors** related to your changes. RPT location: `%LocalAppData%/Arma 3/`. Search for your addon's classnames or your edited filenames.

7. **If everything looks good, commit, push, and open the PR.** Note in the PR description what you tested and what you saw.

If you're unsure about any of this, ask in the [Discord](https://discord.gg/sNKr7fwHUr) — it's the fastest way to get unstuck.

## PR guidelines

A good PR description includes:

- What changed and why
- How you tested it (steps, in-game results, RPT clean? screenshots if visual)
- Any known issues or things you're unsure about
- Any related GitHub issues (`Fixes #123`)

Keep PRs focused — one logical change per PR. If you've fixed three unrelated bugs, that's three PRs. Easier to review, easier to revert if something's off.

## Code style

Match the surrounding code. Existing classnames follow conventions like `adfrc_*` — use the same. Comment anything non-obvious. Don't reformat unrelated files in the same PR.

## Building the full mod

Currently maintainer-only via Mikero's PboProject. HEMTT migration is on the roadmap — when that lands, contributors will be able to build locally with less friction.

## Where to ask questions

- **Quick questions / general chat:** [Discord](https://discord.gg/sNKr7fwHUr)
- **Bug reports / feature requests:** [GitHub Issues](https://github.com/IsoBones/ADFrecut/issues)
- **Security issues:** see [SECURITY.md](SECURITY.md) — don't post these in public

---

By contributing, you agree your contribution is licensed under APL-SA (see [LICENSE.md](LICENSE.md)). If you're joining the core dev team and contributing protected models, you'll be asked to accept [DEV_LICENSE.md](DEV_LICENSE.md).
