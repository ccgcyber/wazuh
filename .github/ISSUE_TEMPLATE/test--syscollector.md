---
name: 'Test: Syscollector'
about: Test suite for Syscollector.

---

# Syscollector test

| Version | Revision | Branch |
| --- | --- | --- |
| x.y.z | rev | branch |

## Scan

Run a complete Syscollector scan:
- Operating system.
- Hardware.
- Packages.
- Network interfaces.
- Ports.
- Processes.

Test on:
- [ ] Debian.
- [ ] RPM.
- [ ] Centos 5.
- [ ] macOS.
- [ ] Windows.
- [ ] Windows XP/2003.

## Configuration

- [ ] Check interval option runs as expected more than the very first time.
- [ ] Send a Syscollector configuration by the shared conf (*agent.conf*).

## Database

- [ ] Check that Syscollector info has been stored in the DB of the agent (*queue/db/xxx.db*).
- [ ] Check that a new scan deletes the previous scan from the DB. [Search by `scan_id`]
- [ ] Delete the DB of an agent (file *001.db* for example) and send a new scan. Is recreated?
