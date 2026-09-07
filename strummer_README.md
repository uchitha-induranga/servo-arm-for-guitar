# Assistive Guitar Strummer

A servo-driven mechanical arm that clamps to an acoustic guitar and reproduces the natural strumming motion of a human arm — so that people with limited arm or hand mobility can play, and so that beginners can hear a correct rhythm while their fretting hand catches up.

> **Patent pending.** This repository documents the early prototype and the concept only. The production design, mechanism refinements and firmware are not published here. See [Status and licensing](#status-and-licensing) below.

---

## Featured on national television

The prototype was demonstrated live on **Lokaya Saha Lokayo**, TV Derana, Sri Lanka.

![TV Derana feature](docs/tv-derana-feature.jpg)
![Prototype on the guitar](docs/prototype-mounted.jpg)

---

## The problem

A guitar needs two hands doing completely different jobs. The fretting hand chooses the notes; the strumming arm supplies the rhythm and most of the expression. Someone with limited mobility, weakness or tremor in one arm can often still fret cleanly — but without a strumming arm the instrument stays silent.

Existing options are limited. Adaptive picks help with grip but not with motion. Backing tracks remove the player from the performance entirely. What was missing was something that produces the *strum itself*, in time, under the player's control, while the player keeps doing the part they can still do.

The same mechanism turns out to help complete beginners for a different reason. New players usually struggle with both hands at once and give up before either becomes automatic. Handing the rhythm to the machine lets them focus on chord shapes and hear what a correct strumming pattern is supposed to sound like.

---

## Design intent

The core idea is that the motion has to be **arm-like, not machine-like**. A rigid sweep across the strings at constant speed sounds wrong — it produces an even, mechanical rake rather than a strum. A real arm accelerates into the strings, contacts them across a shallow arc, and decelerates out, and the pick changes angle between the downstroke and the upstroke.

The prototype approaches this with a **paired servo arrangement**: one axis carries the pick across the strings while the second controls the attack angle, the two moving in opposition through each stroke. Stroke rate is set by the player through a single control, so tempo can be adjusted without touching the code.

The unit mounts across the soundhole without modifying the instrument, and comes off again in seconds.

---

## Prototype firmware

The sketch in `prototype/` is the original proof-of-concept exactly as it appeared in the demonstration. It attaches two servos, reads a potentiometer, and alternates between two mirrored positions with the delay between them set by the knob.

It is deliberately minimal. It exists to prove the motion concept works on a real guitar — not to represent the current design. The production firmware handles stroke shaping, per-user travel limits and start/stop control, and is not part of this repository.

---

## Status and licensing

| | |
|---|---|
| **Stage** | Prototype public; production version in development |
| **IP** | Patent application filed |
| **Repository contents** | Concept documentation and original prototype sketch only |
| **Licence** | All rights reserved — see below |

This repository is published for demonstration, portfolio and prior-art documentation purposes. It is **not** an open-source project and is not offered under a permissive licence. The mechanism, its design and the production firmware are the subject of a pending patent application.

You are welcome to read the material here, reference it, and get in touch. You may not manufacture, sell or distribute devices based on it without permission.

**Interested in licensing, distribution, manufacturing or collaborating on the accessibility side?** Open an issue or contact me directly — I would particularly like to hear from occupational therapists and music therapists working with adaptive instruments.

---

## Credits

Designed and built by **Uchitha Induranga** — *HRTE Projects*, Sri Lanka.

---

© Uchitha Induranga. All rights reserved. Patent pending.
