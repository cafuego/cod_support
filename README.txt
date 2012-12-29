This is effectively a fork of COD.

Because COD has a rewritten (and currently broken) scheduler that uses field
collections instead of simple references to timeslots and rooms, it has become
less than efficient for events that have a lot of timeslots and rooms.

In addition, the field collection appears to be not exposed to views, which
makes creating views based on sessions with room/timeslot trick to say the
least.

Views integration is essential for admin pages and personal schedule export
via ical.
