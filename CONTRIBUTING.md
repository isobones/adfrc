# CONTRIBUTING.md

# Contributing to ADF: Re-Cut

Thanks for your interest in improving ADF: Re-Cut!

## What This Repository Contains

This repository contains **code and configurations only**. 3D models are not included to keep the repo lightweight and protect original creators' work.

## What You Can Contribute

### ✅ Contributions Welcome

- **Bug fixes** - Squash those pesky issues
- **Config improvements** - Weapon stats, vehicle handling, faction setup
- **Script optimizations** - Performance and functionality improvements
- **New features** - Discuss in issues first
- **Documentation** - Always appreciated!
- **CI/CD improvements** - Build processes, automation

### 🤔 Contributions Requiring Discussion

- **New 3D models** - Contact @IsoBones first to discuss integration
- **Major refactors** - Open an issue to discuss approach
- **Breaking changes** - Needs careful review

### ❌ Cannot Contribute

- Modifications to legacy developer assets (protected)
- Assets extracted from other mods without proper licensing

## How to Contribute

### 1. Fork and Clone
```bash
git clone https://github.com/IsoBones/ADFRecut.git
cd ADF-Recut
```

### 2. Create a Branch
```bash
git checkout -b feature/your-feature-name
```

Or for bug fixes:
```bash
git checkout -b fix/bug-description
```

### 3. Make Your Changes

- Follow existing code style
- Comment complex logic
- Test thoroughly in Arma 3

### 4. Testing Your Changes

**Note:** This repository does not contain .p3d files. To test:

1. Download the latest release from [Steam Workshop](https://steamcommunity.com/sharedfiles/filedetails/?id=2971219389)
2. Replace/add your modified configs/scripts
3. Test in Arma 3
4. Document your testing in the PR

### 5. Commit and Push
```bash
git add .
git commit -m "Add: clear description of changes"
git push origin feature/your-feature-name
```

### 6. Open a Pull Request

- **All PRs require approval from @IsoBones before merging**
- Describe what your PR does and why
- Include testing steps/results
- Reference any related issues
- Keep PRs focused (one feature/fix per PR)

## Pull Request Guidelines

**Your PR should include:**
- Clear description of changes
- Reason for the change (bug fix, enhancement, etc.)
- Testing performed (steps, results, screenshots if relevant)
- Any breaking changes noted

**PR Review Process:**
1. Maintainer reviews code
2. Discussion/changes if needed
3. Approval and merge by @IsoBones

## Code Style

- Follow existing formatting in the files you edit
- Use clear classnames that follow the existing structure
- Comment non-obvious code
- Keep configs organized and readable

## Building the Mod

**Note:** Building requires the 3D models which are not in this repository.

The maintainer handles official builds and releases. If you need to test locally:
1. Use the Steam Workshop version as a base
2. Apply your config/script changes
3. Test in Arma 3

## 3D Model Contributions

**Want to contribute models?**

We're still determining the best workflow for community model contributions. In the meantime:

1. Open an issue describing what you want to create
2. Discuss licensing and integration with @IsoBones
3. Models will be handled separately from this code repository

## Community

- **Discord:** [Join here](https://discord.gg/sNKr7fwHUr)
- **Issues:** Use GitHub issues for bugs and feature requests
- **Discussions:** Use GitHub Discussions for questions and ideas

## Questions?

- Check existing issues and discussions first
- Join our Discord for quick questions
- Open a GitHub issue for bug reports or feature requests

---

**By contributing to this project, you agree your contributions will be licensed under the Arma Public License Share Alike (APL-SA).**